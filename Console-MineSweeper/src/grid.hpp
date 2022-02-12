#pragma once

#include "case.hpp"

#include <iostream>

namespace mineSweeper {

	class Grid
	{
	public:
		const int SIZE = 10;
		const int BOMBER_NUMBER = 10;

	private:
		Case** grid;

	public:
		Grid();
		~Grid();

		friend std::ostream& operator<<(std::ostream& stream, const Grid& grid);

	private:
		void initializeGrid();
	};
}