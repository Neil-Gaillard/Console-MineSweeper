#include "case.hpp"

namespace mineSweeper
{
	std::ostream& operator<<(std::ostream& stream, const Case& caseObj)
	{
		switch (caseObj.type)
		{
		case CaseType::ONE: return stream << "1";
		case CaseType::TWO: return stream << "2";
		case CaseType::THREE: return stream << "3";
		case CaseType::FOUR: return stream << "4";
		case CaseType::FIVE: return stream << "5";
		case CaseType::SIX: return stream << "6";
		case CaseType::SEVEN: return stream << "7";
		case CaseType::EIGHT: return stream << "8";
		case CaseType::BOMB: return stream << "9";
		}
		return stream;
	}
}