use std::env;

fn main() {
    let args = env::args();
    let envs = env::vars();

    for i in args {
        println!("> {}", i);
    }
//    dbg!(args);
//    dbg!(envs);
}
