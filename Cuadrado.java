package MiCodigo;

public class Cuadrado {
	private Punto vertice;
	private double lado;
	public Cuadrado(Punto vertice,double lado) {
		this.vertice=vertice;
		this.lado=lado;
		
	}
	/**
	 * @return the vertice
	 */
	public Punto getVertice() {
		return vertice;
	}
	/**
	 * @param vertice the vertice to set
	 */
	public void setVertice(Punto vertice) {
		this.vertice = vertice;
	}
	/**
	 * @return the lado
	 */
	public double getLado() {
		return lado;
	}
	/**
	
	 * @param lado the lado to set
	 */
	public void setLado(double lado) {
		this.lado = lado;
		
	}
	
	public double getArea() {
		double area=lado*lado;
		return(area);
	}
				
	}
