import models.ThreadBasica;

public class Principal {


    public static void main(String[] args) throws Exception {
        ThreadBasica threadBasica = new ThreadBasica();
        Thread t1 =  new Thread(threadBasica);
        Thread t2 = new Thread(threadBasica);
        Thread t3 = new Thread(threadBasica);
        t1.start();
        t2.start();
        t3.start();
    }       
    
}
