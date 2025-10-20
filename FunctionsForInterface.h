#pragma once
#include <iostream>
#include <vector>

	void CleaningConsole() noexcept;
	void CleaningBuffor() noexcept;
	void CleanAll() noexcept;
	void AftCleanF() noexcept;
	void AftCleanP() noexcept;
	void InBetw() noexcept;
	void TabSort() noexcept;

	/* ------------------------- Inside Functions -------------------------- */
	void CleaningBuffor() noexcept
	{
		//cleans the cin input buffor
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	void CleaningConsole() noexcept
	{
		//cleans all inconsole symbols.
#ifdef _WIN32
		system("cls");
#else
		system("clear");
#endif;
	}
	void CleanAll() noexcept
	{
		//clean both buffor and console.
		CleaningBuffor();
		CleaningConsole();
	}
	/* ------------------------ Interface Algorithms ------------------------ */
	void AftCleanF() noexcept
	{
		CleaningConsole();
		std::cout
			<< "+----------------------------------------------------------------------------------------------------------------------+"
			<< std::endl;
		CleaningBuffor();
	}
	void AftCleanP() noexcept
	{
		CleaningConsole();
		std::cout
			<< "+----------------------------------------------------------------------------------------------------------------------+"
			<< std::endl;

	}
	void InBetw() noexcept
	{
		std::cout
			<< std::endl
			<< "+----------------------------------------------------------------------------------------------------------------------+"
			<< std::endl
			<< std::endl;
	}
	void TabSort() noexcept
	{

	}
