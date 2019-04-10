# Virtual Functions and Abstract Classes
A **_pure virtual function_** is like an **_abstract function_** in other languages like Java and C# and a **_pure virtual class_** is like an **_interface_** in those languages.

**_ = 0 _** at the end of a virtual function makes it a **_pure virtual function_**. A class with at least one pure virtual function is an **_Abstract Class_**.

```C++
virtual void display() const = 0;
```








