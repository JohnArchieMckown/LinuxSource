// import std.stdio; imports the entire stdio library in global scope

void main() {
	import std.stdio : writeln ; // only bring in writeln
	writeln("Hello, World from D!");
}
