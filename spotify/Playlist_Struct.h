#pragma once

using namespace System;

public ref class Playlist {
public:
	String^ judul;
	String^ penyayi;
	int id;
	Playlist(String^ judul, String^ penyanyi, int id) {
		this->id = id;
		this->judul = judul;
		this->penyayi = penyanyi;
	}
};
