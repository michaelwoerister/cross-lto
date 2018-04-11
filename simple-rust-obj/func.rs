
#[no_mangle]
pub extern "C" fn foo(x: u32) -> u32 {
	x | 1
}