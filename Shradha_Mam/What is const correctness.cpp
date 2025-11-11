
// ✅ 8. What is const correctness?
// Const correctness ensures code does not modify objects that are meant to be read-only.
// Used by:
// const variables
// const methods
// const pointers/references
// Example:
class A {
public:
    int get() const { return x; }  // does not modify object
private:
    int x;
};
