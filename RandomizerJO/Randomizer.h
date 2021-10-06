#pragma once

struct xoroshiro128
{
	/*  Written in 2019 by David Blackman and Sebastiano Vigna (vigna@acm.org)

	To the extent possible under law, the author has dedicated all copyright
	and related and neighboring rights to this software to the public domain
	worldwide. This software is distributed without any warranty.

	See <http://creativecommons.org/publicdomain/zero/1.0/>. */

#include <stdint.h>

	/* This is xoroshiro128++ 1.0, one of our all-purpose, rock-solid,
	   small-state generators. It is extremely (sub-ns) fast and it passes all
	   tests we are aware of, but its state space is large enough only for
	   mild parallelism.

	   For generating just floating-point numbers, xoroshiro128+ is even
	   faster (but it has a very mild bias, see notes in the comments).

	   The state must be seeded so that it is not everywhere zero. If you have
	   a 64-bit seed, we suggest to seed a splitmix64 generator and use its
	   output to fill s. */


	inline uint64_t rotl(const uint64_t x, int k) {
		return (x << k) | (x >> (64 - k));
	}


	uint64_t s[2];

	xoroshiro128() = default;
	
	uint64_t next(void) {
		const uint64_t s0 = s[0];
		uint64_t s1 = s[1];
		const uint64_t result = rotl(s0 + s1, 17) + s0;

		s1 ^= s0;
		s[0] = rotl(s0, 49) ^ s1 ^ (s1 << 21); // a, b
		s[1] = rotl(s1, 28); // c

		return result;
	}
};