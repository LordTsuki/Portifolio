function CalcularMédia()
{
    var n1, n2, n3, media;
    n1= Number(document.getElementById('idNota1').value)
    n2= Number(document.getElementById('idNota2').value)
    n3= Number(document.getElementById('idNota3').value)
    media= (n1+n2+n3)/3
    document.getElementById("idMedia").value = media.toFixed(2)
}