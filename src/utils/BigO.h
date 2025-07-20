/*
=======================================================================
PANDUAN PEMAHAMAN: SEBERAPA CEPAT ALGORITMA BEKERJA DI TOKO JIM?
=======================================================================

APA ITU KOMPLEKSITAS WAKTU?
- Cara mengukur seberapa lama algoritma bekerja saat data bertambah
- Seperti menghitung berapa lama kasir butuh waktu saat antrian bertambah
- Notasi "Big O" = cara matematika menulis kecepatan algoritma

=======================================================================
1. ALGORITMA JARINGAN DISTRIBUSI TOKO
=======================================================================

🚚 BFS (Breadth-First Search) - Distribusi Cepat:
   Kompleksitas: O(V + E)
   
   ANALOGI SEDERHANA:
   - V = Jumlah toko cabang (5 toko)
   - E = Jumlah jalur antar toko (8 jalur)
   - Seperti kirim barang ke semua toko sekaligus secara merata
   
   CONTOH PRAKTIS:
   - 5 toko + 8 jalur = 13 operasi
   - 10 toko + 20 jalur = 30 operasi
   - Waktu bertambah LINEAR (proporsional)

🔍 DFS (Depth-First Search) - Audit Mendalam:
   Kompleksitas: O(V + E)
   
   ANALOGI SEDERHANA:
   - Seperti audit satu jalur sampai habis, baru pindah jalur lain
   - Mengecek toko satu persatu secara mendalam
   
   KENAPA SAMA DENGAN BFS?
   - Kedua algoritma tetap harus mengunjungi SEMUA toko
   - Hanya urutannya yang berbeda

=======================================================================
2. ALGORITMA PENGURUTAN HARGA PRODUK
=======================================================================

🐌 Bubble Sort - Pengurutan Bertahap:
   Kompleksitas: O(n²) - LAMBAT untuk data banyak
   
   ANALOGI SEDERHANA:
   - Seperti mengurutkan produk dengan membandingkan 2-2
   - 10 produk = 100 perbandingan
   - 100 produk = 10.000 perbandingan
   - 1000 produk = 1.000.000 perbandingan!
   
   KAPAN DIGUNAKAN: Untuk display kecil (<50 produk)

🔄 Selection Sort - Pilih yang Terkecil:
   Kompleksitas: O(n²) - SAMA LAMBATNYA dengan Bubble Sort
   
   ANALOGI SEDERHANA:
   - Cari produk termurah, taruh di depan
   - Cari produk termurah kedua, taruh kedua
   - Dan seterusnya...
   
   KAPAN DIGUNAKAN: Pengurutan manual sederhana

⚡ QuickSort - Pengurutan Cepat:
   Kompleksitas: O(n log n) rata-rata - JAUH LEBIH CEPAT
   
   ANALOGI SEDERHANA:
   - Pilih harga tengah, bagi produk jadi 2 kelompok
   - Kelompok murah & kelompok mahal
   - Ulangi untuk setiap kelompok
   
   PERBANDINGAN PRAKTIS:
   - 1000 produk: Bubble Sort = 1 juta operasi
   - 1000 produk: QuickSort = 10.000 operasi (100x LEBIH CEPAT!)

=======================================================================
3. ALGORITMA PENCARIAN PRODUK
=======================================================================

🚶 Linear Search - Cari Satu-Satu:
   Kompleksitas: O(n) - Waktu bertambah linear
   
   ANALOGI SEDERHANA:
   - Sales mencari produk dari rak pertama sampai rak terakhir
   - 100 produk = maksimal 100 kali cek
   - 1000 produk = maksimal 1000 kali cek
   
   KAPAN DIGUNAKAN: Produk tidak terurut, pencarian sederhana

🎯 Binary Search - Cari dengan Tebakan Pintar:
   Kompleksitas: O(log n) - SANGAT CEPAT!
   
   ANALOGI SEDERHANA:
   - Seperti tebak angka: "Lebih besar atau kecil?"
   - Bagi produk jadi 2, ambil tengah, bandingkan
   - 1000 produk = maksimal 10 kali cek saja!
   
   SYARAT: Produk harus sudah terurut berdasarkan harga
   
   PERBANDINGAN MAGIC:
   - 1 juta produk: Linear = 1 juta cek
   - 1 juta produk: Binary = 20 cek saja!

=======================================================================
KESIMPULAN UNTUK BISNIS TOKO JIM:
=======================================================================

✅ UNTUK JARINGAN TOKO (5 cabang):
   - BFS & DFS sama efisiennya
   - Pilih BFS untuk distribusi merata
   - Pilih DFS untuk audit mendalam

✅ UNTUK PENGURUTAN HARGA:
   - < 50 produk: Pakai Bubble/Selection Sort (sederhana)
   - > 50 produk: WAJIB pakai QuickSort (cepat)

✅ UNTUK PENCARIAN PRODUK:
   - Produk acak: Linear Search
   - Produk terurut: Binary Search (WAJIB!)

💡 PELAJARAN PENTING:
   Memilih algoritma yang tepat = Bisnis lebih efisien!
*/