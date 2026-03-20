$target = "192.168.120.96"

1..65535 | ForEach-Object {
    $port = $_
    try {
        $client = New-Object System.Net.Sockets.TcpClient
        $async = $client.BeginConnect($target, $port, $null, $null)
        $wait = $async.AsyncWaitHandle.WaitOne(50)   # timeout in ms
        if ($wait -and $client.Connected) {
            Write-Host "OPEN: $port"
            $client.Close()
        }
    } catch {}
}
