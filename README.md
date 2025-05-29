

## Kelompok 4


## Judul Program
**Perhitungan Arus Root-Mean-Square (RMS) pada Sinyal Sinusoidal Menggunakan Metode Simpson’s 1/3 Rule**

## Daftar Anggota Kelompok
| Nama Lengkap           | NPM         |
|------------------------|-------------|
| Muhamad Dzaky Maulana  | 2306264401 |
| Ibnu Zaky Fauzi        | 2306161870 |
| Gerrardin Nabil Zulhian| 2306250661 |
| Muhammad Hilmy Mahardika| 2306267006 |

## Deskripsi Program

Program ini dibuat untuk menghitung nilai arus root-mean-square (RMS) dari suatu sinyal arus periodik berbasis fungsi sinusoidal, yaitu i(t) = 3\sin(2\pi t), menggunakan metode integrasi numerik **Simpson’s 1/3 Rule**. Program ini diimplementasikan dalam bahasa pemrograman C, dengan membagi satu periode sinyal menjadi beberapa titik diskrit, menghitung nilai kuadrat arus pada setiap titik, lalu mengaproksimasi nilai integral kuadrat arus secara numerik.

Nilai RMS arus diperoleh dari akar hasil integral tersebut, yang secara teori mewakili arus efektif pada suatu beban.  
Metode Simpson’s Rule dipilih karena memberikan hasil yang sangat akurat untuk fungsi yang smooth seperti sinusoidal dan umum digunakan dalam aplikasi teknik komputer maupun elektro.

**Fitur utama program:**
- Mendefinisikan fungsi arus sinusoidal.
- Membagi interval waktu menjadi titik-titik diskrit.
- Menghitung nilai kuadrat arus pada setiap titik.
- Melakukan integrasi numerik dengan Simpson’s 1/3 Rule.
- Menampilkan hasil perhitungan nilai RMS arus.

---

## Deskripsi Program Python untuk Grafik

Visualisasi grafik gelombang arus \(i(t)\) dan kuadrat arus \(i^2(t)\) dihasilkan menggunakan program Python dengan library Matplotlib.  
Kode Python ini berfungsi untuk:
- Membuat array waktu dari 0 sampai 1 detik.
- Menghitung nilai (i(t) dan (i^2(t) pada setiap titik waktu.
- Menampilkan dua grafik, yaitu:
  - Grafik gelombang arus (i(t) terhadap waktu.
  - Grafik kuadrat arus (i^2(t) terhadap waktu.

Visualisasi ini bertujuan untuk memperjelas konsep integral area di bawah kurva \(i^2(t)\) yang digunakan pada perhitungan RMS secara numerik. Grafik juga dapat digunakan untuk memverifikasi hasil simulasi, memudahkan analisa, serta memperindah laporan ilmiah maupun presentasi.

---

**Catatan:**  
- Kode sumber C dan Python dapat ditemukan di folder repository ini.
- Program dapat dikembangkan lebih lanjut untuk data hasil eksperimen atau sinyal non-sinusoidal.
