public class Proceso
{
    // de declaran los atributos privados de la clase
    private String nombre_proceso;
    private int tiempo;
    private String nombre_tarea;
    
    public Proceso()
    {
        // se le asignan valores por defecto a los atributos en el constructor
        nombre_proceso = "";
        tiempo = 0;
        nombre_tarea = "";
    }
    
    // métodos Setters y Getters de los atributos de la clase
    public void setNombreProceso(String val)
    {
        nombre_proceso = val;
    }
    
    public String getNombreProceso()
    {
        return nombre_proceso;
    }
    
    public void setTiempo(int val)
    {
        tiempo = val;
    }
    
    public int getTiempo()
    {
        return tiempo;
    }
    
    public void setNombreTarea(String val)
    {
        nombre_tarea = val;
    }
    
    public String getNombreTarea()
    {
        return nombre_tarea;
    }
}