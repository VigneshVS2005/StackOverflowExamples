fn recursive_function() {
    println!("Stack frame added");
    recursive_function(); // Infinite recursion
}

fn main() {
    recursive_function();
}
