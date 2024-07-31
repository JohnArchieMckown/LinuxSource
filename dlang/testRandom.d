import std.stdio;
import std.array;
import std.algorithm;
import std.range ;
import std.random;
import std.conv;

void main() {
	// Variables
	const int numberOfTests = 100_000_000;
	auto countOfValue = new int[100]; 
	auto rnd = Random(unpredictableSeed);
	for(int i=0;i<numberOfTests;i++) {
		auto idx = uniform(0, 100, rnd); // generates 0..99, half-closed half-open interval from 0 to 100, if you're interested.
		countOfValue[idx]++;			// how many times has this number been generated?
	}
	write("Count of values:");writeln(countOfValue);
	write("Sum of Values:"); writeln(sum(countOfValue));
	int max=0, min=int.max;
	foreach(int value; countOfValue) {
		max = max < value ? value : max;
		min = min > value ? value : min;
	}
	write("Range of values is from ");write(min);write(" to ");write(max);
	write(" with is an interval of ");write(max - min);
	write(" which is a percentage difference of ");write(100.0*to!float(max - min)/numberOfTests);writeln("%");
	write("Max of values:");writeln(max);
	write("Min of values:");writeln(min);
	assert(sum(countOfValue) == numberOfTests); // better be! Think about it, if you're confused.
}
