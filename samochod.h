#pragma once
#include "parametryJazdy.h"
#include <stdio.h>      
#include <stdlib.h> 
#include <iostream>
#include <time.h>
#include <ctime>


#ifndef SAMOCHOD_H
#define SAMOCHOD_H

class Samochod
{
public:
	Samochod()
	{};

	void jazda();

private:
	int stala = 0;
};

#endif // !SAMOCHOD_H
