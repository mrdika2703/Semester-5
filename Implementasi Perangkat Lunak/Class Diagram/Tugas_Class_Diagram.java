/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tugas_class_diagram;

/**
 *
 * @author WahyuWWasaas
 */

import java.util.Scanner;

public class Tugas_Class_Diagram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input jumlah roda
        System.out.print("Masukkan jumlah roda (2 atau 4): ");
        int jumlahRoda = scanner.nextInt();

        // Input bahan bakar
        System.out.print("Masukkan jenis bahan bakar: ");
        String jenisBahanBakar = scanner.next();

        // Inisialisasi objek roda dan fuel
        Fuel fuel = new Fuel(jenisBahanBakar);

        // Membuat kendaraan sesuai dengan jumlah roda
        AutoCarRPL kendaraan;
        if (jumlahRoda == 2) {
            kendaraan = new Mio();
        } else if (jumlahRoda == 4) {
            kendaraan = new AutoCarRPL();
            System.out.println("Ini adalah Mobil (Kendaraan dengan roda 4).");
            kendaraan.pasangRoda(4);  // Pasang 4 roda
        } else {
            System.out.println("Jumlah roda tidak valid. Hanya bisa 2 atau 4.");
            return;
        }

        // Set bahan bakar dan kecepatan
        kendaraan.setBahanBakar(fuel.getJenis());
        kendaraan.setKecepatan(60);

        // Menjalankan metode kendaraan
        kendaraan.start();
        kendaraan.drive();
    }
}
