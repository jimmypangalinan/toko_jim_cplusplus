#include <iostream>
#include "graph/Graph.h"
#include "graph/BFS.h"
#include "graph/DFS.h"
#include "sorting/Sorting.h"
#include "searching/Searching.h"
#include "utils/BigO.h"

int main() {
    std::cout << "=== SISTEM MANAJEMEN TOKO ELEKTRONIK JIM ===\n";
    std::cout << "Aplikasi Manajemen Jaringan Toko & Inventory\n\n";

    // --- JARINGAN TOKO (GRAPH) ---
    std::cout << "=== 1. PEMETAAN JARINGAN TOKO ===\n";
    Graph g(5);
    g.addEdge(0, 1);  // Pusat ↔ Mall
    g.addEdge(0, 4);  // Pusat ↔ Bekasi
    g.addEdge(1, 2);  // Mall ↔ PIK
    g.addEdge(1, 3);  // Mall ↔ Kelapa Gading
    g.addEdge(1, 4);  // Mall ↔ Bekasi
    g.addEdge(2, 3);  // PIK ↔ Kelapa Gading
    g.addEdge(3, 4);  // Kelapa Gading ↔ Bekasi

    std::cout << "Jaringan Distribusi Antar Cabang:\n";
    std::cout << "Toko 0 (Pusat): Jl. Sudirman\n";
    std::cout << "Toko 1 (Mall): Grand Indonesia (HUB)\n";
    std::cout << "Toko 2 (PIK): Pantai Indah Kapuk\n";
    std::cout << "Toko 3 (KG): Kelapa Gading\n";
    std::cout << "Toko 4 (Bekasi): Bekasi Cyber Park\n\n";
    g.printGraph();

    std::cout << "\n=== 2. RUTE DISTRIBUSI PRODUK ===\n";
    std::cout << "Distribusi Cepat dari Toko Pusat (BFS): ";
    BFS(g, 0);
    std::cout << "Audit Mendalam semua Toko (DFS): ";
    DFS(g, 0);

    // --- MANAJEMEN INVENTORY (SORTING) ---
    std::cout << "\n=== 3. PENGATURAN HARGA PRODUK ===\n";
    std::vector<int> productPrices = {500000, 200000, 900000, 100000, 500000, 600000};
    std::cout << "Harga produk sebelum diurutkan (dalam Rupiah): ";
    std::cout << "Rp";
    for (int i = 0; i < productPrices.size(); i++) {
        std::cout << productPrices[i];
        if (i < productPrices.size() - 1) std::cout << ", Rp";
    }
    std::cout << "\n";
    
    std::cout << "Produk: Smartwatch(500K), Earbuds(200K), Laptop(900K), Powerbank(100K), Smartphone(500K), Tablet(600K)\n";

    bubbleSort(productPrices);
    std::cout << "Harga produk setelah diurutkan untuk display toko: ";
    std::cout << "Rp";
    for (int i = 0; i < productPrices.size(); i++) {
        std::cout << productPrices[i];
        if (i < productPrices.size() - 1) std::cout << ", Rp";
    }
    std::cout << "\n";
    std::cout << "Urutan display: Powerbank → Earbuds → Smartphone → Smartwatch → Tablet → Laptop\n";

    // --- SISTEM PENCARIAN PRODUK (SEARCHING) ---
    std::cout << "\n=== 4. SISTEM PENCARIAN PRODUK ===\n";
    int targetPrice = 500000;
    std::cout << "Customer mencari produk dengan harga Rp" << targetPrice << "\n";
    
    int idx = linearSearch(productPrices, targetPrice);
    std::cout << "Pencarian Manual (Linear Search): ";
    if (idx != -1) {
        std::cout << "Ditemukan di posisi display ke-" << (idx + 1);
        if (idx == 2) std::cout << " (Smartphone)";
        else if (idx == 3) std::cout << " (Smartwatch)";
        std::cout << "\n";
    }

    idx = binarySearch(productPrices, targetPrice);
    std::cout << "Sistem Kasir Digital (Binary Search): ";
    if (idx != -1) {
        std::cout << "Ditemukan di database posisi ke-" << (idx + 1);
        if (idx == 2) std::cout << " (Smartphone)";
        else if (idx == 3) std::cout << " (Smartwatch)";
        std::cout << "\n";
    }

    // --- LAPORAN SISTEM ---
    std::cout << "\n=== 5. RINGKASAN OPERASIONAL TOKO ===\n";
    std::cout << "✅ Jaringan distribusi: 5 cabang terhubung optimal\n";
    std::cout << "✅ Rute pengiriman: Tersedia jalur cepat dan audit lengkap\n";
    std::cout << "✅ Display produk: Harga terurut dari termurah ke termahal\n";
    std::cout << "✅ Sistem kasir: Pencarian produk < 1 detik\n";
    std::cout << "✅ Efisiensi operasional: Siap melayani customer!\n";

    // --- Big O Notation Info
    std::cout << "\nAnalisis Kompleksitas: Lihat utils/BigO.h\n";

    return 0;
}