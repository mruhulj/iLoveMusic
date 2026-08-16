# iLoveMusic — GUI Music Player (Spotify-inspired)

Program pemutar musik berbasis GUI (Windows Forms, C++/CLI) yang menyerupai Spotify, dikerjakan untuk menuntaskan proyek mata kuliah Algoritma dan Pemrograman.

**Mahasiswa:** Muhammad Ruhul Jadid — 123230046

## Fitur

Program ini memiliki 7 menu utama:

1. Tambah Lagu
2. Update Lagu
3. Hapus Lagu
4. Acak Lagu (shuffle)
5. Download Daftar Lagu
6. Putar Lagu
7. Hentikan Lagu

## Cara Penggunaan

1. Daftar akun
2. Login dengan akun yang telah dibuat
3. Download lagu dari internet untuk dimasukkan ke dalam program
4. Klik "Tambah Lagu" untuk memasukkan lagu yang telah di-download

## Struktur

```
spotify/
├── Program.cpp          # Entry point
├── Log_Reg.cpp/.h        # Login & registrasi akun
├── MenuPlaylist.cpp/.h   # Menu utama playlist
├── TambahLagu.cpp/.h     # Tambah lagu
├── Update_Lagu.cpp/.h    # Update lagu
├── playingmusic.cpp/.h   # Pemutaran musik
├── Playlist_Struct.h     # Struktur data playlist
└── *.wav, playlist-*.txt # Asset lagu & data playlist per user
```

## Tech Stack

C++ · C++/CLI · Windows Forms
