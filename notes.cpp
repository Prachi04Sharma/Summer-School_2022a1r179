//Variable : Variable are same as container which is use to store any type of data.
//Pointer : Pointer as special type of variable which is use to store address of another variable.
//Reference [ & ] : It return the address of given variable.  
//De-refernce [ * ] : It return value at given address.
//Types of pointer : 
//1) NULL pointer : Pointer initialize with nullptr is called NULL pointer.
//- it is good practice to initialize pointer with NULL to avoid wild pointer.

//2) Void pointer : Pointer define using void keyword is called void pointer.
//Syntax : 
// void * ptr_name = NULL;
//-It also known as generic pointer.


//3) Dangling pointer : Pointer which indicate memory which is deallocated.
// Pointer which indicate memory which is deallocated.

//4) Constant Variable : Constant variable is defined using const keyword.
//-we can not override the value of constant variable. 

//5) Constant Pointer : Constant pointer is same as Constant Variable : 
// Syntax : const data_type * ptr_name = & variable_name;

//Pointer of Pointer : 
// It is also known as double pointer, use to store address of any pointer : 
// Syntax: data_type ** pointer_name = & another_pointer_name;

// Pointer to function :
// Pointer which indicate address of function. 