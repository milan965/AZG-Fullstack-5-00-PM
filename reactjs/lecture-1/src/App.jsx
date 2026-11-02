function App() {
  let name = "jay"
  let color = ["red","green","blue","pink","yellow","brown","skyblue"];

  return (
    <div>
        <ul>
            {
              color.map((v)=>{
                return (
                    <li style={{backgroundColor:v}}>{v}</li>
                )
              })
          }
        </ul>
    </div>

  )
}

export default App
