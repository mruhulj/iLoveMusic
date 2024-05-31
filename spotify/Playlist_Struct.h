#pragma once

using namespace System;

public ref class Playlist {
public:
	String^ judul;
	String^ penyayi;
	int id;
	Playlist(String^ judul, String^ penyanyi, int id) {
		judul = judul;
		penyanyi = penyanyi;
		id = id;
	}
};
