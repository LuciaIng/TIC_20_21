package MiCodigo;

public class Mascota {
	private String especie;
	private String nombre;
	private double peso;
	private int edad;
	public Mascota(String especie, String nombre, int edad) {
		this.especie = especie;
		this.nombre = nombre;
		this.edad = edad;
	}
	public Mascota(String  nombre) {
		this.nombre = nombre;
		
	}
	/**
	 * @return the especie
	 */
	public String getEspecie() {
		return especie;
	}
	/**
	 * @param especie the especie to set
	 */
	public void setEspecie(String especie) {
		this.especie = especie;
	}
	/**
	 * @return the nombre
	 */
	public String getNombre() {
		return nombre;
	}
	/**
	 * @param nombre the nombre to set
	 */
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}
	/**
	 * @return the peso
	 */
	public double getPeso() {
		return peso;
	}
	/**
	 * @param peso the peso to set
	 */
	public void setPeso(double peso) {
		this.peso = peso;
	}
	/**
	 * @return the edad
	 */
	public int getEdad() {
		return edad;
	}
	/**
	 * @param edad the edad to set
	 */
	public void setEdad(int edad) {
		this.edad = edad;
	}
	
}
