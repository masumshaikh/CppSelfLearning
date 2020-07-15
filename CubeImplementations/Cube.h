#pragma once
class Cube
{
public:
	int length_;
	bool verbose_;
	int Volume() {
		return 8; 
	}
	Cube() : length_{ 2 }, verbose_{ false } {}
	Cube(int l) : length_{ l }, verbose_{ false } {}
	Cube(int l, bool verbose) : length_{ l }, verbose_{ verbose } {}
	Cube(const Cube& c);
};

