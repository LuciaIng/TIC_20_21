package MiCodigo;

public class Alumno {
	private String nombre;
	private String apellido1;
	private String apellido2;
	private Fecha fechaNacimiento;
	public Alumno(String nombre, String apellido1, String apellido2, Fecha fechaNacimiento) {
		super();
		this.nombre = nombre;
		this.apellido1 = apellido1;
		this.apellido2 = apellido2;
		this.fechaNacimiento = fechaNacimiento;
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
	 * @return the apellido1
	 */
	public String getApellido1() {
		return apellido1;
	}
	/**
	 * @param apellido1 the apellido1 to set
	 */
	public void setApellido1(String apellido1) {
		this.apellido1 = apellido1;
	}
	/**
	 * @return the apellido2
	 */
	public String getApellido2() {
		return apellido2;
	}
	/**
	 * @param apellido2 the apellido2 to set
	 */
	public void setApellido2(String apellido2) {
		this.apellido2 = apellido2;
	}
	/**
	 * @return the fechaNacimiento
	 */
	public Fecha getFechaNacimiento() {
		return fechaNacimiento;
	}
	/**
	 * @param fechaNacimiento the fechaNacimiento to set
	 */
	public void setFechaNacimiento(Fecha fechaNacimiento) {
		this.fechaNacimiento = fechaNacimiento;
	}
	
}
