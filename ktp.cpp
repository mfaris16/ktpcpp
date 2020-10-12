#include<cstdlib>
#include<iostream>
using namespace std;
typedef struct {
	char nik[50];
	char nama[20];
	char ttl[50];
	char jenis_kelamin[10];
	char darah[10];
	char alamat[50];
	char rtrw[50];
	char keldesa[50];
	char kecamatan[50];
	char agama[10];
	char status[20];
	char pekerjaan[50];
	char kewarganegaraan[20];
	char masa[20];
	}ktp;
int main(int argc, char *argv[])
{
	ktp kartu;
	//menginput dari kb
	cout<<"Masukann NIK :"; cin.getline(kartu.nik,50);
	cout<<"Masukan Nama :"; cin.getline(kartu.nama,20);
	cout<<"Masukan Tempat Tgl Lahir:"; cin.getline(kartu.ttl,50);
	cout<<"Masukann Jenis Kelamin :"; cin.getline(kartu.jenis_kelamin,10);
	cout<<"Masukann Gol. Darah :"; cin.getline(kartu.darah,10);
	cout<<"Masukan Alamat :"; cin.getline(kartu.alamat,50);
	cout<<"Masukan RT/RW:"; cin.getline(kartu.rtrw,50);
	cout<<"Masukann Kelurahan Desa :"; cin.getline(kartu.keldesa,50);
	cout<<"Masukan Kecamatan :"; cin.getline(kartu.kecamatan,50);
	cout<<"Masukan Agama:"; cin.getline(kartu.agama,10);
	cout<<"Masukann Status Perkawinan :"; cin.getline(kartu.status,20);
	cout<<"Masukan Pekerjaan :"; cin.getline(kartu.pekerjaan,50);
	cout<<"Masukan Kewarganegaraan:"; cin.getline(kartu.kewarganegaraan,20);
	cout<<"Masukan Masa Berlaku:"; cin.getline(kartu.masa,20);
  
	//output data
	cout << "+===============================================================================================================+" << endl;
  cout << "||                              PROVINSI KEPULUAN RIAU                                                     ||" << endl;
	cout << "||                                KABUPATEN BINTAN                                                             ||" << endl;
	cout << "|| NIK                    " << kartu.nik << "                                                                  ||" << endl;
	cout << "|| Nama                   " << kartu.nama << "                                                                 ||" << endl;
	cout << "|| Tempat/ tgl Lahir      " << kartu.ttl << "                                                                  ||" << endl;
	cout << "|| Jenis Kelamin          " << kartu.jenis_kelamin << "      Gol. Darah :" << kartu.darah << "                 ||" << endl;
	cout << "|| Alamat                 " << kartu.alamat << "                                                               ||" << endl;
	cout << "||       RT/RW            " << kartu.rtrw << "                                                                 ||" << endl;
	cout << "||       Kel/Desa         " << kartu.keldesa << "                                                              ||" << endl;
	cout << "||       Kecamatan        " << kartu.kecamatan << "                                                            ||" << endl;
	cout << "|| Agama                  " << kartu.agama << "                                                                ||" << endl;
	cout << "|| Status Perkawinan      " << kartu.status << "                                                               ||" << endl;
	cout << "|| Pekerjaan              " << kartu.pekerjaan << "                                                            ||" << endl;
	cout << "|| Kewarganegaraan        " << kartu.kewarganegaraan << "                                                      ||" << endl;
	cout << "|| Berlaku Hingga         " << kartu.masa << "                                                                 ||" << endl;
	cout << "+===============================================================================================================+" << endl;
	
	return 0;
	}
