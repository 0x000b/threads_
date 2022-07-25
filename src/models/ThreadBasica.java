package models;

public class ThreadBasica implements Runnable{
    private String nome;


    @Override
    public void run() {
        nome = Thread.currentThread().getName();
        System.out.println(nome);
    }
    
}
