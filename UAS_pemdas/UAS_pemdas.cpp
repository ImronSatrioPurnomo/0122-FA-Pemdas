#include <iostream>
using namespace std;
class MataKuliah
{
public:  // isi dengan access modifier yang dibutuhkan
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
	// tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
	MataKuliah()
	{
		presensi = 0.0;
		activity = 0.0;
		exercise = 0.0;
		tugasAkhir = 0.0;
		// isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
	}
	virtual void namaMataKuliah() { return; }
	virtual void inputNilai() { return; }
	virtual void hitungNilaiAkhir() { return; }
	virtual void cekKelulusan() { return; }
	// tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}
	void setActivity(float nilai) {
		this->activity = nilai;
	}
	float getActivity() {
		return activity;
	}
	void setExercise(float nilai) {
		this->exercise = nilai;
	}
	float getExercise() {
		return exercise;
	}
	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getTugasAkhir() {
		return tugasAkhir;
	}
	// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
};
class Pemrograman : public MataKuliah
{
public:
	void namaMataKuliah() {
		cout << "Mata Kuliah : Pemrograman" << endl;
	}
	void inputNilai() {
		cout << "Masukan Nilai Presensi : ";
		cin >> presensi;
		cout << "Masukan Nilai Activity ; ";
		cin >> activity;
		cout << "Masukan Nilai Exercise : ";
		cin >> exercise;
		cout << "Masukan Nilai Tugas Akhir : ";
		cin >> tugasAkhir;
	}
	void hitungNilaiAkhir() {
		float nilaiAkhir = (presensi + activity + exercise + tugasAkhir);
		cout << "Nilai Akhir : " << nilaiAkhir << endl;
	}
	void cekKelulusan() {
		float nilaiAkhir = (presensi + activity + exercise + tugasAkhir);
		if (nilaiAkhir >= 75.0) {
			cout << "Anda Lulus Mata Kuliah Pemrograman." << endl;
		}
		else if (nilaiAkhir <= 75.0) {
			cout << "Anda Tidak Lulus Mata Kuliah Pemrograman. " << endl;
		}
	}
	// isi disini untuk mengisi kelas pemrograman
};
class Jaringan : public MataKuliah
{
public:
	void namaMataKuliah() {
		cout << "Mata Kuliah : Jaringan" << endl;
	}
	void inputNilai() {
		cout << "Masukan Nilai Activity : ";
		cin >> activity;
		cout << "Masukan Nilai Exercise : ";
		cin >> exercise;
	}
	void hitungNilaiAkhir() {
		float nilaiAkhir = (activity + exercise);
		cout << "Nilai Akhir: " << nilaiAkhir << endl;
	}
	void cekKelulusan() {
		float nilaiAkhir = (activity + exercise);
		if (nilaiAkhir >= 75.0) {
			cout << "Anda Lulus Mata Kuliah Jaringan." << endl;
		}
		else if (nilaiAkhir <= 75.0) {
			cout << "Anda Tidak Lulus Mata Kuliah Jaringan." << endl;
		}
	}
	// isi disini untuk mengisi kelas jaringan
};
int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;

	cout << "Pilih Mata Kuliah : " << endl;
	cout << "1. Pemrograman" << endl;
	cout << "2. Jaringan" << endl;
	cout << "3. Keluar" << endl;
	cout << "Pilih : " << endl;
	cin >> pilih;

	switch (pilih) {
	case '1':
		mataKuliah = &pemrograman;
		break;
	case '2':
		mataKuliah = &jaringan;
		break;
	}


	mataKuliah->

		return 0;


	// isi disini untuk menentukan mata kuliah yang dipilih
}