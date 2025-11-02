## 📘 List of Programs

### 1. Employee Salary Calculation  
Create a class `EMPLOYEE` with:
- **Data Members:** `Employee_Number`, `Employee_Name`, `Basic`, `DA`, `IT`, `Net_Sal`
- **Member Functions:** Read data, calculate net salary, and display data.  
> DA = 52% of Basic  
> IT = 30% of Gross Salary  

---

### 2. Student Marks Processing  
Define a `STUDENT` class with USN, Name, and marks in 3 tests.  
Compute the average of the **two best marks** and display the average marks of all students.

---

### 3. Complex Number Addition (Function Overloading)  
Create a class `COMPLEX` with overloaded `ADD()` functions:  
1. `ADD(a, s2)` – where `a` is an integer (real part) and `s2` is a complex number.  
2. `ADD(s1, s2)` – where both `s1` and `s2` are complex numbers.  

---

### 4. Linked List Implementation  
Create a class `LIST` (Linked List) with functions to:
- Insert an element at the front  
- Delete an element from the front  
Demonstrate all operations using a list object.

---

### 5. Template Function for Quick Sort  
Implement a **template-based Quick Sort** to demonstrate sorting for both integers and doubles.

---

### 6. Stack Operations (Operator Overloading)  
Create a class `STACK` using an array of integers.  
Overload:
1. `s1 = s1 + element;` → pushes an element  
2. `s1 = s1 - ;` → pops an element  
Display the stack contents after each operation using the overloaded `<<` operator.

---

### 7. Date Class (Operator Overloading)  
Create a class `DATE` to handle valid dates in `dd/mm/yy` format.  
Overload:
1. `no_of_days = d1 - d2;`  
2. `d2 = d1 + no_of_days;`  
Display results using the overloaded `<<` operator.

---

### 8. Matrix Operations  
Create a class `MATRIX` using a 2D array.  
Overload:
- `==` → check compatibility  
- `+` → matrix addition  
- `-` → matrix subtraction  
Display results using the overloaded `<<` operator.

---

### 9. Octal Number Operations  
Create a class `OCTAL` with overloaded `+` operator:
1. `OCTAL h = x;`
2. `Int y = h + k;`  
Display octal results using `<<`.

---

### 10. Queue Implementation  
Create a class `QUEUE` with functions to:
- Add elements  
- Delete elements  
Implement for both integers and doubles, displaying content after every operation.

---

### 11. Doubly Linked List (DLIST)  
Create a class `DLIST` to:
- Insert a node at a specified position  
- Delete a node from a specified position  
Display the list after every operation.

---

### 12. Inheritance with Publication, Book, and Magazine  
Create a base class `Publication` with a title.  
Derive classes:
- `Book` → has accession number  
- `Magazine` → has volume number  
Then derive `Journal` from both.  
Ensure derived functions invoke base class functions.  
Create and display a `Journal` object.

---

## ⚙️ How to Run
```bash
g++ filename.cpp
./a.out
