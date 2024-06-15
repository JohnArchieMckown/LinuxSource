use std::env;

fn main() {
    let args = env::args(); // This is an iterator
    let envs = env::vars(); // This is also an iterator

    println!("\nArguments:");
    for i1 in args {
        println!("> {}", i1);
    }

    println!("\nEnvironment variables:");
    for i2 in envs {
        println!("> {}={}", i2.0, i2.1);
    }
    //    dbg!(args);
    //    dbg!(envs);
}
