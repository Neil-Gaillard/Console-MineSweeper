#pragma once

#include <iostream>

namespace mineSweeper
{
	enum class CaseType
	{
		ONE,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		BOMB
	};
	
	struct Case
	{
		CaseType type;
		bool discovered;

		friend std::ostream& operator<<(std::ostream& stream, const Case& caseObj);
	};
}