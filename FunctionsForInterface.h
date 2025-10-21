#pragma once
#include <iostream>
#include <vector>
#include <string>


    // functions to use. >
	void CleaningConsole() noexcept , 
		CleaningBuffor() noexcept , 
		CleanAll() noexcept , 
		AftCleanF(std::string title) noexcept , 
		AftCleanP(std::string title) noexcept , 
		InBetw() noexcept , 
		TabSort() noexcept; 




	/********************************************************************************************************************************************/





	std::string title = "Empty title";
	
	void CleaningBuffor() noexcept { std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
	void CleaningConsole() noexcept
	{
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif;
	}
	void CleanAll() noexcept { CleaningBuffor(); CleaningConsole();}
	void AftCleanF(std::string title) noexcept 
	{ 
		if (title.length() > 121) { title = "(((Title too long!!!)))"; }
		int Spaces = (121 - title.length()) ,
		Filler = Spaces % 2,
		SpacesPerSide = (Spaces/2) + Filler;
	CleaningConsole(); 
	std::cout
			<< "+----------------------------------------------------------------------------------------------------------------------+"
			<< std::endl;
		for (int i = 0; i <= SpacesPerSide; i++)
		{
			std::cout << " ";
		}
		std::cout
			<< title;
		for (int i = 0; i <= SpacesPerSide; i++)
		{
			std::cout << " ";
		}
		std::cout
			<< std::endl;
		CleaningBuffor();
	}
	void AftCleanP(std::string title) noexcept
	{
		if (title.length() > 121) { title = "(((Title too long!!!)))"; }
		int Spaces = (121 - title.length()) ,
			Filler = Spaces % 2 ,
			SpacesPerSide = (Spaces/2);
		CleaningConsole();
		std::cout
			<< "+----------------------------------------------------------------------------------------------------------------------+"
			<< std::endl;
		for (int i = 1; i <= SpacesPerSide; i++)
		{
			std::cout << " ";
		}
		std::cout
			<< title;
		for (int i = 0; i <= SpacesPerSide; i++)
		{
			std::cout << " ";
		}
		std::cout
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
		//wip (using vector)
	}
