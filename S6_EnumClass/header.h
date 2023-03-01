#pragma once
#include <iostream>

/*
enum Weapon
{
	GUN,
	SHOTGUN,
	BOW,
	COUNT
};

enum Outfit
{
	BOW,
	TIE,
	SUIT,
	MAX
};

// GUN == BOW both are int = 0

//BOW redefinition
*/

enum class Weapon // :char allows you to assign char values to the enums, :float etc
{
	BOW,
	GUN,
	SHOTGUN,
	COUNT
};

enum class Outfit
{
	BOW,
	TIE,
	SUIT,
	MAX
};