#pragma once
#include <chrono>
#include <iostream>
struct timer
{
	timer()
	{
		auto start_time = std::chrono::high_resolution_clock::now();
		auto current_time = std::chrono::high_resolution_clock::now();
	}

	 GetTimeFromStart(start_time, current_time);
};