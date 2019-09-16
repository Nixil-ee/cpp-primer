#ifndef SCREEN_H
#define SCREEN_H
#include<string>

using std::string;

class Screen
{
private:
	typedef string::size_type pos;
	typedef string str;

public:
	Screen()=default;
	~Screen();

public:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

Screen::Screen()
{
}

Screen::~Screen()
{
}
#endif // !SCREEN_H

#pragma once
