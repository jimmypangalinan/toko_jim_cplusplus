# tokojim

Aplikasi **tokojim** adalah program demo struktur data dan algoritma menggunakan bahasa C++ dengan standar industri. Aplikasi ini mengimplementasikan beberapa konsep dasar penting seperti graph (graf), pencarian (searching), pengurutan (sorting), serta penjelasan notasi Big O. Program ini dapat dijadikan materi pembelajaran maupun dasar pengembangan aplikasi dengan algoritma yang efisien.

---

## Fitur

- **Graph (Graf)**
  - Representasi graf menggunakan adjacency list.
  - Implementasi Breadth First Search (BFS).
  - Implementasi Depth First Search (DFS).

- **Sorting (Pengurutan)**
  - Bubble Sort
  - Selection Sort
  - Quick Sort

- **Searching (Pencarian)**
  - Linear Search
  - Binary Search

- **Big O Notation**
  - Penjelasan kompleksitas waktu untuk setiap algoritma.

---

## Struktur Folder

```
tokojim/
│
├── CMakeLists.txt
├── README.md
├── src/
│   ├── main.cpp
│   ├── graph/
│   │   ├── Graph.h
│   │   ├── Graph.cpp
│   │   ├── BFS.h
│   │   └── DFS.h
│   ├── sorting/
│   │   ├── Sorting.h
│   │   └── Sorting.cpp
│   ├── searching/
│   │   ├── Searching.h
│   │   └── Searching.cpp
│   └── utils/
│       └── BigO.h
├── include/
├── tests/
├── build/
└── docs/
```

---

## Cara Menjalankan

### 1. Persiapan

Pastikan Anda sudah menginstall:

- [GCC/G++](https://gcc.gnu.org/)
- [CMake](https://cmake.org/) (opsional, jika menggunakan CMakeLists.txt)

### 2. Build dengan CMake (Direkomendasikan)

```bash
# Masuk ke folder project
cd tokojim

# Buat folder build dan masuk ke dalamnya
mkdir -p build
cd build

# Generate file Makefile dengan CMake
cmake ..

# Kompilasi program
make
```

File executable akan berada di folder `build/`, misal: `./tokojim`

### 3. Build Manual (Tanpa CMake)

```bash
g++ -std=c++11 src/main.cpp src/graph/Graph.cpp src/graph/BFS.cpp src/graph/DFS.cpp src/sorting/Sorting.cpp src/searching/Searching.cpp -o tokojim
```

### 4. Menjalankan Program

```bash
# Jika menggunakan CMake:
./tokojim

# Jika build manual:
./tokojim
```

---

## Contoh Output

```
Welcome to tokojim - Data Structures & Algorithms Demo App

Graph adjacency list:
Vertex 0: -> 1 -> 4
Vertex 1: -> 0 -> 2 -> 3 -> 4
...

BFS from vertex 0: 0 1 4 2 3 
DFS from vertex 0: 0 1 2 3 4 
...
```

---

## Catatan

- Penjelasan tentang kompleksitas algoritma (Big O Notation) terdapat pada file `src/utils/BigO.h`.
- Seluruh kode dan dokumentasi ditulis dalam bahasa Inggris agar sesuai standar industri.
- Untuk pengujian, gunakan file pada folder `tests/` atau tambahkan test sesuai kebutuhan.

---

## Kontributor

Jimmi Pangalinan

---

## Lisensi

Proyek ini bebas digunakan untuk keperluan pembelajaran dan pengembangan lebih lanjut.