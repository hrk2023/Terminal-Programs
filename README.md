# Custom Terminal Commands

## Technologies Used : 
- C Programming

## Purpose : 
 
To make some custom commands which can be directly used from the terminal, it can be a linux terminal, windows powershell etc. These commands will reduce the time required to type a command and hence will save some time.
 
## Commands : 
- iplocate
    ```text
    This command with return details of any ip address on your terminal.
    The Details that it returns are :
    ```

    ```json
    {
        "query": "47.29.180.146",
        "status": "success",
        "continent": "Asia",
        "continentCode": "AS",
        "country": "India",
        "countryCode": "IN",
        "region": "AS",
        "regionName": "Assam",
        "city": "Guwahati",
        "district": "",
        "zip": "781030",
        "lat": 26.1833,
        "lon": 91.7454,
        "timezone": "Asia/Kolkata",
        "offset": 19800,
        "currency": "INR",
        "isp": "Reliance Jio Infocomm Ltd",
        "org": "Reliance Jio infocomm ltd",
        "as": "AS55836 Reliance Jio Infocomm Limited",
        "asname": "RELIANCEJIO-IN",
        "mobile": true,
        "proxy": false,
        "hosting": false
    }
    ```

    ### How To Use " iplocate " :
    - For Linux:
        ```bash
        $iplocate 23.23.23.23
        ```
    - For Windows:
        ```bash
        C:\>iplocate 23.23.23.23
        ```
