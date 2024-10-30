/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.tugas_class_diagram;

/**
 *
 * @author WahyuWWasaas
 */
import java.util.ArrayList;
import java.util.List;

public class AutoCarRPL implements Transportasi {
    protected String bahanBakar;
    protected int kecepatan;
    protected List<Roda> rodaList;
    protected Mesin mesin;

    public AutoCarRPL() {
        this.bahanBakar = "";
        this.kecepatan = 0;
        this.rodaList = new ArrayList<>();
        this.mesin = new Mesin();  // Setiap kendaraan punya mesin
    }

    @Override
    public void setBahanBakar(String bahanBakar) {
        this.bahanBakar = bahanBakar;
    }

    @Override
    public void setKecepatan(int kecepatan) {
        this.kecepatan = kecepatan;
    }

    public void pasangRoda(int jumlah) {
        for (int i = 0; i < jumlah; i++) {
            rodaList.add(new Roda());
        }
        System.out.println("Berhasil memasang " + jumlah + " roda.");
    }

    public void start() {
        System.out.println("Kendaraan dimulai.");
    }

    public void drive() {
        System.out.println("Kendaraan bergerak dengan kecepatan " + kecepatan + " km/jam.");
    }
}
