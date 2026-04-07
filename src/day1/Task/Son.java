package Task;

public class Son extends Mom implements Brother,Sister {

    @Override
    public void dance() {
        System.out.println("I learnt dancing from Brother");
    }

    @Override
    public void sing() {
        System.out.println("My sister sings so sweet");
    }
    
}