package models;

public class ThreadBasica implements Runnable{
    private String nome;
    private int i=0;


    @Override
    public void run() {
        synchronized(this){
            i++;
            nome = Thread.currentThread().getName();
            System.out.println(nome+": "+ i);
        }  
    }
    
}
