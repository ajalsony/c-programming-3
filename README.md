Your C program, which implements a circular queue using an array and provides options to enqueue, dequeue, display, and exit.

---

## 🚀 Circular Queue Implementation in C

This is a simple C program that demonstrates how to implement a **Circular Queue** using an array. The program offers a menu-driven interface to perform basic queue operations like:

* **Enqueue**
* **Dequeue**
* **Display**
* **Exit**

### 📁 File Structure

```
📦circular-queue
 ┣ 📄main.c
 ┗ 📄README.md
```

### 🧠 How It Works

* The circular queue is initialized with a user-defined size.
* Elements are added using `enqueue` and removed using `dequeue`.
* The queue uses modulo arithmetic to wrap around when reaching the end of the array.
* Prevents overflow (when queue is full) and underflow (when queue is empty).

### 🔧 Features

* Dynamic size input
* Circular behavior using modulo
* Basic error checking for overflow/underflow

### 🖥️ Sample Menu

```
Select option
1. Enqueue    2. Dequeue    3. Display    4. Exit
```

### 📌 Known Issues / Fixes Needed

* `size` is declared but **never initialized**. It should be initialized to the queue size.
* In case 2 (Dequeue), the message "Queue is full" is misleading; it should be "Queue is empty".
* `value` is reused for both queue size and element input, which can be confusing.
* Better handling for edge cases (like displaying when queue is empty) could be added.

### ✅ Improvements (Suggested)

* Initialize `size = value;` after reading queue size.
* Rename variables for clarity (e.g., `queueSize`, `element`).
* Improve formatting and user interaction prompts.
* Modularize the code using functions (e.g., `enqueue()`, `dequeue()`, `display()`).

### 🔄 Compilation & Run

```bash
gcc main.c -o circular_queue
./circular_queue
```

### 📃 License

This project is open source and free to use under the MIT License.

---
