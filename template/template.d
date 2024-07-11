// D programming language
void main()
{
    import std.stdio : writefln;
    import std.algorithm.sorting : sort;
    import std.range : chain;

    int[] arr1 = [4, 9, 7];
    int[] arr2 = [5, 2, 1, 10];
    int[] arr3 = [6, 8, 3];
    // @nogc functions are guaranteed by the compiler
    // to be without any GC allocation
    () @nogc {
        sort(chain(arr1, arr2, arr3));
    }();
    writefln("%s\n%s\n%s\n", arr1, arr2, arr3);
}
