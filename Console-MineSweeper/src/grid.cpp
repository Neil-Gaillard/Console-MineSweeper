#include "grid.hpp"

namespace mineSweeper
{
	Grid::Grid() : grid(new Case*[SIZE])
	{
		for (int i = 0; i < SIZE; ++i)
			this->grid[i] = new Case;
		initializeGrid();
	}

	Grid::~Grid()
	{
		for (int i = 0; i < SIZE; ++i)
			delete grid[i];
		delete[] grid;
	}

	void Grid::initializeGrid()
	{
		
	}

	std::ostream& operator<<(std::ostream& stream, const Grid& grid)
	{
		for (int i = 0; i < grid.SIZE; ++i)
		{
			for (int j = 0; j < grid.SIZE; ++j)
				stream << grid.grid[i][j];
			stream << '\n';
		}
		return stream;
	}
}
