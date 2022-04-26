int foo();
int bar();

int foo() {
	return bar();
}

int bar() {
	return 2;
}

int main() {
	bar();
	return 0;
}