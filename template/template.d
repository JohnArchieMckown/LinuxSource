// D programming language
void main(string[] args)
{
    import std.stdio : writefln, writeln;
	import std.algorithm : sort;
	import std.process : environment; // UNIX environment variables as an immutable map
	
	string Is="is";
	string Are="are";
	ulong alen=args.length;
	string[string] envs = environment.toAA;

	writefln("There %s %d argument%s.\n", alen==1?Is:Are, alen, alen==1?"":"s");
	for(ulong idx=0; idx < alen; ++idx) {
		writefln("Argument %d is: %s",idx,args[idx]);
	}
	writefln("\nEnvironment Variables.");
	foreach(envName; envs.keys.sort) {
		writefln("%s=%s",envName,envs[envName]);
	}
}
