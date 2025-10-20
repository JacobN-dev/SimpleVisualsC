#pragma once
#include <iostream>
#include <vector>
#include <string>


    // functions to use.
	void CleaningConsole() noexcept , // Use to clean the console, (this is not cleaning the buffer!).
		CleaningBuffor() noexcept ,  // Use to clean the buffer.
		CleanAll() noexcept ,  //Use to clean both buffer and console.
		AftCleanF(std::string title) noexcept , //Use to keep the console clean and to delete the buffer, for example after taking input u can use this before going into another function. //wip
		AftCleanP(std::string title) noexcept , // Same as AftCleanF but without cleaning the buffer. //wip
		InBetw() noexcept , // Use to add a visual devisor of content.
		TabSort() noexcept; // wip




	/********************************************************************************************************************************************/





	std::string title = "Empty title";
	double SpacesPerSide = 121 - title.length();
	double SpaceCalc() 
	{
		//wip (Maybe change the whole idea, just devide and put around the title, problem appears when your title is even, gotta -0.5 and then generate.)
	}
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
	CleaningConsole(); 
	std::cout
		<< "+----------------------------------------------------------------------------------------------------------------------+"
		<< "                                  "
		<< SpacesPerSide
		<< title
		<< SpacesPerSide
		<< std::endl;
		CleaningBuffor();
	}
	void AftCleanP(std::string title) noexcept
	{
		CleaningConsole();
		
		std::cout
			<< "+----------------------------------------------------------------------------------------------------------------------+"
			<< SpacesPerSide
			<< title
			<< SpacesPerSide
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
