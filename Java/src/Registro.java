public class Registro
{
    // de declaran los atributos privados de la clase
    private int tamaño;
    private Proceso [] vector;
    
   public Registro()
   {
       // se le asignan valores por defecto a los atributos en el constructor
       tamaño = 0;
       vector = null;
   }
   
   // métodos Setters y Getters de los atributos de la clase
   public void setTamaño(int val)
   {
       tamaño = val;
   }
   
   public int getTamaño()
   {
       return tamaño;
   }
   
   public void setVector(int pos, Proceso val)
   {
       vector[pos] = val;
   }
   
   public Proceso getVector(int pos)
   {
       return vector[pos];
   }
   
   // método para crear el vector
   public void crearVector()
   {
       // le asignamos al vector de tipo Proceso un tamaño del valor de la variable tamaño
       vector = new Proceso[tamaño];
   }
   
   // método para cambiar dos posicion del vector
   public void cambiar(int p1, int p2)
   {
       // inicializamos una variable de tipo proceso en el valor que haya en la posicion p1 del vector
       Proceso temp = getVector(p1);
       // en la poscion p1 le asignamos el valor que haya en la posicion p2 del vector
       setVector(p1, getVector(p2));
       // en la poscion p2 le asignamos el valor que haya en la variable temp
       setVector(p2, temp);
   }
   
   // método para ordenar por el tiempo de uso
   public void ordenar()
   {
       // recorremos con el ciclo for el vector
       for (int i = 0; i < getTamaño(); i++)
       {
            // con el otro ciclo for recorremos la siguiente posicion de i
            for (int j = i+1; j < getTamaño(); j++)
            {
                // si la el tiempo de la posicion i del vector es mayor a su siguiente posicion
                if (getVector(i).getTiempo() > getVector(j).getTiempo())
                {
                    // entonces cambiamos esas posiciones
                    cambiar(i, j);
                }
            }
       }
   }
}