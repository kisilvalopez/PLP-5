# PLP-5

## Objects

C++ is an object-oriented programming language. Objects are instances of classes or structs and they’re used to model and manipulate data and perform operations. 

The ‘class’ keyword is used to define a class with variables and member functions. You can also use the ‘struct’ keyword which, similarly to ‘class’, has a public member variable by default. The difference between ‘class’ and ‘struct’ is that with ‘struct’ the variables are public by default and with ‘class’ they’re private.

## Naming Conventions For Objects

There are no strict naming conventions that are enforced but there are common practices that are used when it comes to object naming conventions. 
- CamelCase - capitalizing the first letter of each word except the first word
- snake_case -  all lowercase letters with underscores separating words
- Prefixes or suffixes
- Avoiding single letter names for objects
- Constants are recommended to be in UPPERCASE to distinguish them from other variables
- Choosing descriptive names to make sure that the purpose of an object is clear

## Standard Methods
C++ has standard methods that are referred to as “special member functions” that define how objects behave in certain conditions within a program. 

Some of these key special member functions:
- Constructor - called when an object is created and it’s used to initialize an object’s state
```
class ExampleClass {
public:
		ExampleClass(); //this is a default constructor
		ExampleClass(int x, y); //constructor with parameters
	};
```

- Destructor - used when an object is out of scope and is used to release resources held by the object
```
class ExampleClass {
public:
		~ExampleClass(); //destructor
	};
```

- Copy Constructor - used to create new objects as a copy of an already existing object
```
class ExampleClass {
public:
		ExampleClass(const ExampleClass& other); //copy constructor
	};
```

## Inheritance
C++ supports inheritance and having multiple inheritances. Users are able to create new classes based on existing classes thus inheriting their properties and behaviors. To inherit more than one class, the user must separate the base classes with commas in the class declaration.
```
class ExampleClass : public ExampleClass2, public ExampleClass3 {
public:
	void ExampleFunc(){
		//code
	}
};
```

## Overloading Methods

Non-virtual functions

The method resolution relies on the object's static type (compile-time binding) if the function in the base class is not defined as virtual. In this instance, if the object belongs to the base class type, the version of the method in the base class will be called; otherwise, the version in the derived class will be invoked.

Virtual Function 

The dynamic type of the object determines the method resolution (runtime binding) if the function in the base class is designated as virtual. In this instance, even though the object is of the base class type but points to an object of the derived class, the version of the method in the derived class will be invoked.

## Access Specifiers

Access Specifiers control the visibility of members in a class when programming
- ‘public’ - public members of the base class become public members of the derived class
- ‘private’ - public and protected members of the base class become private members of the derived class
- ‘protected’ - public and protected members of the base class become protected members of the derived class
```
class ExampleClass {
public:
    // public members
private:
    // private members
protected:
    // protected members
};
```
