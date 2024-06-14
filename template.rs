use std::env;

fn main() {
    let args = env::args();
    let envs = env::vars();

    println!("Arguments:");
    for i1 in args {
        println!("> {}", i1);
    }

    println!("Environment variables:");
    for i2 in envs {
        println!("> {}={}", i2.0, i2.1);
    }
//    dbg!(args);
//    dbg!(envs);
}
