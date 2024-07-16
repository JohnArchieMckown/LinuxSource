import std.stdio;
import std.array;
import std.algorithm;
import std.range ;
import std.random;
import std.conv;

void main() {
	// Variables
	const int numberOfTests = 10_000_000;
	auto countOfValue = new int[100]; 
	auto rnd = Random(unpredictableSeed);
	for(int i=0;i<numberOfTests;i++) {
		auto idx = uniform(0, 100, rnd); // generates 0..99, half-closed half-open interval if you're interested
		countOfValue[idx]++;
	}
	write("Count of values:");writeln(countOfValue);
	write("Sum of Values:"); writeln(sum(countOfValue));
	int max=0, min=int.max;
//	for(int idx=0;idx<countOfValue.length;++idx) {
	foreach(int value; countOfValue) {
//		max = max < countOfValue[idx] ? countOfValue[idx] : max;
		max = max < value ? value : max;
//		min = min > countOfValue[idx] ? countOfValue[idx] : min;
		min = min > value ? value : min;
	}
	write("Range of values is from ");write(min);write(" to ");write(max);
	write(" with is an interval of ");write(max - min);
	write(" which is a percentage difference of ");write(100.0*to!float(max - min)/numberOfTests);writeln("%");
	write("Max of values:");writeln(max);
	write("Min of values:");writeln(min);
	assert(sum(countOfValue) == numberOfTests);
}
